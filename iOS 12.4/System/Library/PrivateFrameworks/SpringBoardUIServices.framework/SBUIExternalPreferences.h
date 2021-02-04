/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface SBUIExternalPreferences : NSObject {

	NSUserDefaults* _soundDefaults;
	BOOL _keyboardPlaysSounds;

}

@property (assign,nonatomic) BOOL keyboardPlaysSounds;              //@synthesize keyboardPlaysSounds=_keyboardPlaysSounds - In the implementation block
+(id)sharedInstance;
-(BOOL)keyboardPlaysSounds;
-(void)setKeyboardPlaysSounds:(BOOL)arg1 ;
-(id)init;
@end
