/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSMutableArray, SKUIExpandViewElement;

@interface SKUIExpandPageComponent : SKUIPageComponent {

	NSMutableArray* _childComponents;
	SKUIExpandViewElement* _viewElement;

}

@property (nonatomic,readonly) SKUIExpandViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
-(long long)componentType;
-(SKUIExpandViewElement *)viewElement;
-(id)initWithViewElement:(id)arg1 ;
-(id)metricsElementName;
-(id)childComponentForIndex:(long long)arg1 ;
-(id)childComponents;
@end
