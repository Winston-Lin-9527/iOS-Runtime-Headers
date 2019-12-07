/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperationLocator.h>

@interface FPItemOperationLocator : FPActionOperationLocator
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)identifier;
-(unsigned long long)size;
-(id)filename;
-(BOOL)isDownloaded;
-(BOOL)isFolder;
-(id)parentIdentifier;
-(BOOL)isProviderItem;
-(BOOL)requiresCrossDeviceCopy;
-(BOOL)isMaterializedOnDisk;
@end
