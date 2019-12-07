/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <CoreFoundation/NSURL.h>

@class NSString;

@interface UNSecurityScopedURL : NSURL {

	NSString* _sandboxExtensionClass;

}
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(id)_issueSandboxExtension;
-(id)initFileURLWithPath:(id)arg1 sandboxExtensionClass:(id)arg2 ;
@end
