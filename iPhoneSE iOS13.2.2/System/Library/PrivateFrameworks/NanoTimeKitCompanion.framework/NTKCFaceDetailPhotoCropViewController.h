/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKCNavigationController.h>

@class _NTKCFaceDetailPhotoCropViewController, NTKCompanionCustomPhotosEditor, NTKFace, NTKDigitalTimeLabelStyle;

@interface NTKCFaceDetailPhotoCropViewController : NTKCNavigationController {

	_NTKCFaceDetailPhotoCropViewController* _implementationVC;

}

@property (nonatomic,readonly) unsigned long long index; 
@property (nonatomic,readonly) NTKCompanionCustomPhotosEditor * editor; 
@property (nonatomic,readonly) NTKFace * face; 
@property (nonatomic,readonly) NTKDigitalTimeLabelStyle * timeStyle; 
-(unsigned long long)index;
-(NTKDigitalTimeLabelStyle *)timeStyle;
-(NTKFace *)face;
-(void)viewDidLoad;
-(NTKCompanionCustomPhotosEditor *)editor;
-(id)initWithIndex:(unsigned long long)arg1 inPhotosEditor:(id)arg2 forFace:(id)arg3 timeStyle:(id)arg4 ;
@end
