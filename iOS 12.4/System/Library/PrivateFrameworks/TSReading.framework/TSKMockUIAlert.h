/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSKUIAlert.h>

@interface TSKMockUIAlert : TSKUIAlert
+(void)setDismissalButtonIndex:(long long)arg1 ;
-(void)showWithDismissedByButtonBlock:(/*^block*/id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 ;
-(long long)firstOtherButtonIndex;
-(long long)cancelButtonIndex;
@end
