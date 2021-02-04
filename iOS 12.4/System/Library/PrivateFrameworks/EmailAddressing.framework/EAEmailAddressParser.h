/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/EmailAddressing.framework/EmailAddressing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EAEmailAddressParser : NSObject
+(id)rawAddressFromFullAddress:(id)arg1 ;
+(id)rawAddressRespectingGroupsFromFullAddress:(id)arg1 ;
+(id)unsafeAddressLocalPartCharacterSet;
+(void)_componentsForFullAddress:(id)arg1 rawAddressIndexes:(id*)arg2 localPartIndexes:(id*)arg3 domainIndexes:(id*)arg4 ;
+(void)insertPreviousRoute:(unsigned short*)arg1 ofLength:(unsigned long long)arg2 toBuffer:(unsigned short*)arg3 ofLength:(unsigned long long)arg4 atPosition:(unsigned short*)arg5 addSpace:(BOOL)arg6 ;
+(BOOL)isLegalEmailAddress:(id)arg1 ;
+(BOOL)addressIsEmptyGroup:(id)arg1 ;
+(id)localPartFromAddress:(id)arg1 ;
+(id)addressDomainFromAddress:(id)arg1 ;
+(id)displayNameFromAddress:(id)arg1 ;
@end
