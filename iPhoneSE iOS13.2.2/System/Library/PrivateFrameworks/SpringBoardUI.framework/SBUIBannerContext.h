/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIBannerSource, SBUIBannerTarget;
@class SBUIBannerItem;

@interface SBUIBannerContext : NSObject {

	SBUIBannerItem* _item;
	id<SBUIBannerSource> _source;
	id<SBUIBannerTarget> _target;
	BOOL _isValid;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid;                //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,readonly) SBUIBannerItem * item;                    //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) id<SBUIBannerSource> source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) id<SBUIBannerTarget> target;              //@synthesize target=_target - In the implementation block
-(id)description;
-(void)invalidate;
-(BOOL)isValid;
-(id<SBUIBannerTarget>)target;
-(id<SBUIBannerSource>)source;
-(SBUIBannerItem *)item;
-(id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3 ;
@end
