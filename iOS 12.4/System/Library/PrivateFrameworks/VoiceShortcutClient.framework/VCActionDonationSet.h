/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface VCActionDonationSet : NSObject {

	NSMutableArray* _predictedActions;
	NSMutableArray* _recentActions;
	NSMutableArray* _appSuggestedActions;

}

@property (nonatomic,readonly) NSMutableArray * predictedActions;                 //@synthesize predictedActions=_predictedActions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * recentActions;                    //@synthesize recentActions=_recentActions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * appSuggestedActions;              //@synthesize appSuggestedActions=_appSuggestedActions - In the implementation block
-(NSMutableArray *)recentActions;
-(id)init;
-(NSMutableArray *)appSuggestedActions;
-(NSMutableArray *)predictedActions;
@end
