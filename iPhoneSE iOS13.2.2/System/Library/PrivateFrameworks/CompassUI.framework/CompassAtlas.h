/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CompassUI/CompassUI-Structs.h>
@class CompassAtlasManifest;

@interface CompassAtlas : NSObject {

	unsigned _texName;
	CompassAtlasManifest* _manifest;
	CGSize _size;

}
-(void)dealloc;
-(void)bind;
-(id)initWithImageData:(char*)arg1 manifest:(id)arg2 ;
-(SCD_Struct_Co3)metadataForImageNamed:(id)arg1 ;
@end
