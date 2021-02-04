/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class QLPreviewController, UIImage, UIView;

@interface QLTransitionContext : NSObject <NSSecureCoding> {

	QLPreviewController* _previewController;
	UIImage* _sourceViewSnapshotImage;
	BOOL _contextPreparedToSend;
	BOOL _usingViewForZoomTransition;
	UIView* _sourceView;
	double _topNavigationOffset;
	double _hostNavigationOffset;
	UIView* _sourceViewSnapshot;
	CGSize _previewItemSize;
	CGRect _sourceFrame;
	CGRect _uncroppedFrame;

}

@property (nonatomic,retain) UIView * sourceView;                      //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,retain) UIView * sourceViewSnapshot;              //@synthesize sourceViewSnapshot=_sourceViewSnapshot - In the implementation block
@property (assign) CGRect sourceFrame;                                 //@synthesize sourceFrame=_sourceFrame - In the implementation block
@property (assign) CGRect uncroppedFrame;                              //@synthesize uncroppedFrame=_uncroppedFrame - In the implementation block
@property (assign) double topNavigationOffset;                         //@synthesize topNavigationOffset=_topNavigationOffset - In the implementation block
@property (assign) double hostNavigationOffset;                        //@synthesize hostNavigationOffset=_hostNavigationOffset - In the implementation block
@property (assign) BOOL usingViewForZoomTransition;                    //@synthesize usingViewForZoomTransition=_usingViewForZoomTransition - In the implementation block
@property (assign) CGSize previewItemSize;                             //@synthesize previewItemSize=_previewItemSize - In the implementation block
+(BOOL)useZoomTransitionForPreviewController:(id)arg1 ;
+(id)firstChildNavigationControllerFromViewController:(id)arg1 ;
+(BOOL)useViewTransitionForPreviewController:(id)arg1 ;
+(BOOL)useImageTransitionForPreviewController:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(CGRect)sourceFrame;
-(CGRect)uncroppedFrame;
-(void)setUncroppedFrame:(CGRect)arg1 ;
-(double)topNavigationOffset;
-(void)setTopNavigationOffset:(double)arg1 ;
-(double)hostNavigationOffset;
-(void)setHostNavigationOffset:(double)arg1 ;
-(CGSize)previewItemSize;
-(id)initWithQLPreviewController:(id)arg1 containerView:(id)arg2 toViewController:(id)arg3 ;
-(void)prepareContextToSend;
-(void)_snapshotSourceViewIfNeeded;
-(id)sourceViewSnapshotImage;
-(void)setUpTransitionSourceView;
-(void)setPreviewItemSize:(CGSize)arg1 ;
-(void)setUsingViewForZoomTransition:(BOOL)arg1 ;
-(void)setSourceFrame:(CGRect)arg1 ;
-(BOOL)usingViewForZoomTransition;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)sourceView;
-(void)setSourceViewSnapshot:(UIView *)arg1 ;
-(UIView *)sourceViewSnapshot;
-(void)setSourceView:(UIView *)arg1 ;
@end
