/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class NSString;

@interface _TVRCMRCommandInfoWrapper : NSObject {

	MRMediaRemoteCommandInfoRef _info;

}

@property (nonatomic,readonly) unsigned command; 
@property (nonatomic,copy,readonly) NSString * commandDescription; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
-(void)dealloc;
-(id)description;
-(BOOL)isEnabled;
-(unsigned)command;
-(NSString *)commandDescription;
-(id)initWithCommandInfo:(MRMediaRemoteCommandInfoRef)arg1 ;
@end
