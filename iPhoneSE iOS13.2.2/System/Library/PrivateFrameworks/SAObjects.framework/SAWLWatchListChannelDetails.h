/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSString, NSURL;

@interface SAWLWatchListChannelDetails : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * appIconDynamicImage; 
@property (nonatomic,copy) NSString * appName; 
@property (nonatomic,copy) NSURL * appStoreURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watchListChannelDetails;
+(id)watchListChannelDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSData *)appIconDynamicImage;
-(void)setAppIconDynamicImage:(NSData *)arg1 ;
-(NSURL *)appStoreURL;
-(void)setAppStoreURL:(NSURL *)arg1 ;
@end
