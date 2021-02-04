/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, CALayer, NSMutableArray;

@interface AVTHUDView : UIView {

	UILabel* _totalLatencyLabel;
	UILabel* _arKitLatencyLabel;
	UILabel* _updateSyncLatencyLabel;
	UILabel* _metalLatencyLabel;
	UILabel* _fpsLabel;
	UILabel* _audioTimeLabel;
	UILabel* _timeBetweenARFrameLabel;
	UILabel* _droppedFrameLabel;
	UILabel* _shaderCompilationLabel;
	SCD_Struct_AV9 _lastFrameData;
	CALayer* _arKitLatencyBar;
	CALayer* _updateLatencyBar;
	CALayer* _metalLatencyBar;
	NSMutableArray* _totalLatencyGraphLayers;
	int _selectedGraphIndex;

}
-(void)_loadSubviews;
-(void)_updateLatencyBar:(SCD_Struct_AV9*)arg1 ;
-(void)_updateLatencyGraph:(SCD_Struct_AV9*)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_label;
-(void)_tapAction:(id)arg1 ;
-(void)updateWithData:(SCD_Struct_AV9)arg1 ;
@end
