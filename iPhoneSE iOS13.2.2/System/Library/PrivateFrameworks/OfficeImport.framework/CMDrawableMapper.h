/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class OADDrawable, CMDrawableStyle, NSData, NSString, OADOrientedBounds;

@interface CMDrawableMapper : CMMapper {

	OADDrawable* mDrawable;
	CMDrawableStyle* mStyle;
	NSData* mImageBinaryData;
	NSString* mName;
	NSString* mExtension;
	int mResourceType;
	NSString* mSourcePath;
	CGRect mBox;
	float mRotation;
	BOOL mIsSupported;
	BOOL mIsCropped;
	CGRect mUncroppedBox;
	OADOrientedBounds* mOrientedBounds;

}
-(id)initWithParent:(id)arg1 ;
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(CGRect)box;
-(BOOL)isCropped;
-(id)blipAtIndex:(unsigned)arg1 ;
-(id)initWithOadDrawable:(id)arg1 parent:(id)arg2 ;
-(void)setBoundingBox;
-(void)setWithOadImage:(id)arg1 ;
-(void)mapTextBoxAt:(id)arg1 withState:(id)arg2 ;
-(void)calculateUncroppedBox:(id)arg1 ;
-(CGRect)uncroppedBox;
-(id)saveResourceAndReturnPath:(id)arg1 withType:(int)arg2 ;
-(void)mapShapeGraphicsAt:(id)arg1 withState:(id)arg2 ;
-(CGRect)shapeTextBoxRect;
-(void)mapDrawingContext:(id)arg1 at:(id)arg2 relative:(BOOL)arg3 withState:(id)arg4 ;
-(void)mapBounds;
-(id)convertMetafileToPdf;
-(void)mapImageBinaryData;
@end
