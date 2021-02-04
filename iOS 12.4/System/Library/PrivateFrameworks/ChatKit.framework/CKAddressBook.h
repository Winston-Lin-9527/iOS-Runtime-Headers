/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKAddressBook : NSObject
+(void*)addressBook;
+(id)locationSharingContactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 useCustomFont:(BOOL)arg3 ;
+(id)monogrammerWithDiameter:(double)arg1 style:(long long)arg2 useAppTintColor:(BOOL)arg3 customFont:(id)arg4 ;
+(id)contactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 monogramStyle:(long long)arg3 tintMonogramText:(BOOL)arg4 customFont:(id)arg5 ;
+(id)contactImageCache;
+(id)placeholderContactImageOfDiameter:(double)arg1 monogramStyle:(long long)arg2 tintMonogramText:(BOOL)arg3 ;
+(id)contactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 monogramStyle:(long long)arg3 tintMonogramText:(BOOL)arg4 ;
+(id)monogrammerProvider;
+(id)transcriptContactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 ;
+(void)flushMonogrammers;
@end
