/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSKeyedUnarchiverDelegate.h>

@class UIFont, NSString;

@interface SPFont : NSObject <NSSecureCoding, NSKeyedUnarchiverDelegate> {

	UIFont* _font;

}

@property (nonatomic,retain) UIFont * font;                         //@synthesize font=_font - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(id)initWithFont:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
@end
