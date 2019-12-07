/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTEmergencyMode, CTXPCServiceSubscriptionContext;

@interface CTEmergencyModeResult : NSObject <NSCopying, NSSecureCoding> {

	CTEmergencyMode* _mode;
	CTXPCServiceSubscriptionContext* _context;

}

@property (nonatomic,readonly) CTEmergencyMode * mode;                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * context;              //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)context;
-(CTEmergencyMode *)mode;
-(id)initWithMode:(id)arg1 andContext:(id)arg2 ;
@end
