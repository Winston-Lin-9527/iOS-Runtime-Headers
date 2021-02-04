/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUI/PUViewControllerSpec.h>

@interface PUVideoEditViewControllerSpec : PUViewControllerSpec {

	BOOL _wantsScrubberInToolbar;

}

@property (assign,nonatomic) BOOL wantsScrubberInToolbar;                 //@synthesize wantsScrubberInToolbar=_wantsScrubberInToolbar - In the implementation block
@property (nonatomic,readonly) double toolbarLongSideMargin; 
@property (nonatomic,readonly) double scrubberEdgeMargins; 
-(void)updateIfNeeded;
-(id)newSpecChange;
-(double)toolbarLongSideMargin;
-(BOOL)wantsScrubberInToolbar;
-(void)setWantsScrubberInToolbar:(BOOL)arg1 ;
-(double)scrubberEdgeMargins;
@end
