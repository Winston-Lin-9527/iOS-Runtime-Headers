/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSDGLTextureInfo : NSObject {

	BOOL _containsMipmaps;
	unsigned _name;
	unsigned _target;
	unsigned _height;
	unsigned _width;

}

@property (nonatomic,readonly) BOOL containsMipmaps;              //@synthesize containsMipmaps=_containsMipmaps - In the implementation block
@property (nonatomic,readonly) unsigned name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned target;                   //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) unsigned height;                   //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned width;                    //@synthesize width=_width - In the implementation block
-(unsigned)name;
-(unsigned)target;
-(unsigned)width;
-(unsigned)height;
-(void)teardown;
-(id)initWithName:(unsigned)arg1 target:(unsigned)arg2 width:(unsigned)arg3 height:(unsigned)arg4 containsMipmaps:(BOOL)arg5 ;
-(BOOL)containsMipmaps;
@end
