/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INParameter, INImage;

@interface INParameterImage : NSObject <NSCopying> {

	INParameter* _parameter;
	INImage* _image;

}

@property (nonatomic,copy,readonly) INParameter * parameter;              //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,copy,readonly) INImage * image;                      //@synthesize image=_image - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(INImage *)image;
-(id)initWithParameter:(id)arg1 image:(id)arg2 ;
-(INParameter *)parameter;
@end
