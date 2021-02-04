/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSBundleQuery.h>

@interface _LSBundleProxiesOfTypeQuery : _LSBundleQuery {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)queryWithType:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)bundleUnitMeetsRequirements:(unsigned)arg1 bundleData:(const LSBundleData*)arg2 context:(LSContext*)arg3 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)type;
@end
