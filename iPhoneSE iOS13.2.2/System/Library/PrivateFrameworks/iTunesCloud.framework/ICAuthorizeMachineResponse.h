/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSData;

@interface ICAuthorizeMachineResponse : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSData * keybagData; 
@property (nonatomic,copy,readonly) NSData * tokenData; 
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSData *)tokenData;
-(NSData *)keybagData;
@end
