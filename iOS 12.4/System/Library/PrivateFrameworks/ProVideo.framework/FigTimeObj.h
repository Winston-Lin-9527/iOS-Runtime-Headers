/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FigTimeObj : NSObject <NSCopying, NSCoding> {

	FigTime _time;

}
+(id)timeWithTime:(FigTime)arg1 ;
+(BOOL)classIsAbstract;
-(FigTime)time;
-(void)setTime:(FigTime)arg1 ;
-(id)initWithFigTime:(FigTime)arg1 ;
-(long long)compareWithTime:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)getValue:(FigTime*)arg1 ;
@end
