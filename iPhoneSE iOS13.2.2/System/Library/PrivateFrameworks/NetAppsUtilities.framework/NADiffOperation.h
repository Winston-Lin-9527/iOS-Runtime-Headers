/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NADiffOperation <NSObject,NAEquatable>
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,copy,readonly) NSString * operationDescription; 
@required
-(unsigned long long)type;
-(NSString *)operationDescription;

@end
