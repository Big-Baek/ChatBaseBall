#include "SibalGameMode.h"
#include "wwChatController.h"
#include "ChatWidget.h"

#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Math/UnrealMathUtility.h"





FString ASibalGameMode::make_Rand()
{
	int32 RandomNum = FMath::RandRange(1, 999);
	FString StringNumber = FString::FromInt(RandomNum);

	while (StringNumber.Len() < 3)
	{
		StringNumber = TEXT("0") + StringNumber;
	}

	return StringNumber;
}



FStrikeBallResult ASibalGameMode::HandleMessageFromClient
(const FString& Message, const FString& Master_Num)
{
	
	int32 Strike = 0;
	int32 Ball = 0;
	int32 count = 0;

	for (auto c : Message)
	{
		int32 FoundIndex; // ���� ����
		bool bb = Master_Num.FindChar(c, FoundIndex); // ���� ���� ���� Ȯ��
		if (bb)
		{
			if (FoundIndex == count) // ���� �ڸ� ���� Ȯ��
			{
				Strike++;
			}
			else
			{
				Ball++;
				if (Ball >= 3)
				{
					Ball = 0;
					Strike++;
				}
			}
		}
		count++; // �ڸ� �ε��� ����
	}
	return FStrikeBallResult{ Strike, Ball, Master_Num };

}
