/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CRKCardSectionViewControllerRegistry;

@interface _CRKCardSectionViewControllerFactory : NSObject {

	_CRKCardSectionViewControllerRegistry* _registry;

}
+(id)cardSectionViewControllerForCardSection:(id)arg1 ;
+(void)registerCardSectionViewControllerClass:(Class)arg1 ;
+(id)_sharedInstance;
-(void)_registerCardSectionViewControllerClass:(Class)arg1 ;
-(id)_cardSectionViewControllerForCardSection:(id)arg1 ;
-(id)init;
@end
