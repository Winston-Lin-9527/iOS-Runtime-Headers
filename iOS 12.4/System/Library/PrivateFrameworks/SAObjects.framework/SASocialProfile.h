/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>
#import <SAObjects/SAAceComparable.h>

@class NSString;

@interface SASocialProfile : AceObject <SAAceSerializable, SAAceComparable>

@property (nonatomic,copy) NSString * serviceType; 
@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * userName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)socialProfile;
+(id)socialProfileWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)userName;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setUserName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
@end
