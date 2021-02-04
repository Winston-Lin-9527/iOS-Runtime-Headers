/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface FMClient.SearchResult : NSObject <NSSecureCoding> {

	 devices;
	 resultCode;

}

@property (copy,nonatomic) NSArray * devices; 
@property (assign,nonatomic) long long resultCode; 
@property (readonly,nonatomic) NSString * debugDescription; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(void)setResultCode:(long long)arg1 ;
-(void)setDevices:(NSArray *)arg1 ;
-(long long)resultCode;
-(NSArray *)devices;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
@end
