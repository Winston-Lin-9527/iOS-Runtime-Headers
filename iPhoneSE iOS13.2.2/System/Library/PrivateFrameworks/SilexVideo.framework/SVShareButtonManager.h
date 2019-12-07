/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVideoSharingPolicy;
@class AVControlItem, NSString;

@interface SVShareButtonManager : NSObject <SVVideoTransitionObserver> {

	AVControlItem* _controlItem;
	id<SVVideoSharingPolicy> _sharingPolicy;

}

@property (nonatomic,readonly) AVControlItem * controlItem;                         //@synthesize controlItem=_controlItem - In the implementation block
@property (nonatomic,readonly) id<SVVideoSharingPolicy> sharingPolicy;              //@synthesize sharingPolicy=_sharingPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithShareControlItem:(id)arg1 sharingPolicy:(id)arg2 ;
-(id<SVVideoSharingPolicy>)sharingPolicy;
-(AVControlItem *)controlItem;
@end
