/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSVMediaSocialPostDescription, NSString;

@interface SSVMediaSocialPostRequest : SSRequest <SSXPCCoding> {

	SSVMediaSocialPostDescription* _postDescription;

}

@property (nonatomic,readonly) SSVMediaSocialPostDescription * postDescription;              //@synthesize postDescription=_postDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithPostDescription:(id)arg1 ;
-(SSVMediaSocialPostDescription *)postDescription;
@end
