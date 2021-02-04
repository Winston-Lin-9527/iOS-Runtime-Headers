/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADDash.h>

@interface OADPresetDash : OADDash {

	char mType;
	unsigned mIsTypeOverridden : 1;

}
+(id)defaultProperties;
-(id)equivalentCustomDash;
-(id)initWithDefaults;
-(BOOL)isAnythingOverridden;
-(BOOL)isTypeOverridden;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)type;
-(void)setType:(char)arg1 ;
@end
