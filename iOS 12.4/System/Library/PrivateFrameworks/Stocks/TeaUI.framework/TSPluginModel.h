/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Stocks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TeaUI/TeaUI-Structs.h>
@class NSString, UIViewController;

@interface TSPluginModel : NSObject {

	 identifier;
	 revision;
	 size;
	 viewController;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long revision; 
@property (readonly,nonatomic) CGSize size; 
@property (readonly,nonatomic) UIViewController * viewController; 
@property (readonly,nonatomic) long long hash; 
-(long long)revision;
-(CGSize)size;
-(id)init;
-(NSString *)identifier;
-(long long)hash;
-(UIViewController *)viewController;
@end
