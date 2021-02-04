/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FMFUI/FMFUI-Structs.h>
@interface FMFMonogramUtility : NSObject
+(id)contactImageCache;
+(id)monogramImageOfDiameter:(double)arg1 forContact:(id)arg2 monogramStyle:(long long)arg3 tintColor:(id)arg4 customFont:(id)arg5 isPersonImage:(BOOL*)arg6 ;
+(CFStringRef)hexStringFromColor:(id)arg1 ;
+(id)contactStatusCache;
+(id)monogrammerWithDiameter:(double)arg1 style:(long long)arg2 useTintColor:(id)arg3 customFont:(id)arg4 ;
+(id)placeholderContactImageOfDiameter:(double)arg1 monogramStyle:(long long)arg2 useTintColor:(id)arg3 ;
+(void)clearMonogramCache;
+(id)monogramImageOfDiameter:(double)arg1 forContact:(id)arg2 useTintColor:(id)arg3 useCustomFont:(BOOL)arg4 isPersonImage:(BOOL*)arg5 ;
@end
