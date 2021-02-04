/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SBSStatusBarTapContext.h>

@interface SBSStatusBarTapContextImpl : NSObject <NSSecureCoding, SBSStatusBarTapContext> {

	int _styleOverride;

}

@property (assign,nonatomic) int styleOverride;              //@synthesize styleOverride=_styleOverride - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithStyleOverride:(int)arg1 ;
-(void)setStyleOverride:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)styleOverride;
@end
