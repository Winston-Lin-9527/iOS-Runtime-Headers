/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CoreTelephonyClient;

@interface CTCellularPlanProvisioning : NSObject {

	CoreTelephonyClient* _client;

}
-(BOOL)supportsCellularPlan;
-(void)addPlanWith:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
@end
