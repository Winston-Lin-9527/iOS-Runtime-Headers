/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface WFSegmentedControlValue : NSObject {

	NSString* _displayName;
	UIImage* _image;
	id _representedObject;

}

@property (nonatomic,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) UIImage * image;                     //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) id representedObject;                //@synthesize representedObject=_representedObject - In the implementation block
+(id)valueWithDisplayName:(id)arg1 ;
+(id)valueWithDisplayName:(id)arg1 representedObject:(id)arg2 ;
+(id)valueWithImage:(id)arg1 ;
+(id)valueWithImage:(id)arg1 representedObject:(id)arg2 ;
-(NSString *)displayName;
-(UIImage *)image;
-(id)representedObject;
-(id)initWithDisplayName:(id)arg1 image:(id)arg2 representedObject:(id)arg3 ;
@end
