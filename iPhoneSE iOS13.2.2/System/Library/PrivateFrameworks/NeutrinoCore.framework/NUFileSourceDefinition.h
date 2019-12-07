/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@class NSURL, NSString;

@interface NUFileSourceDefinition : NUSingleSourceDefinition {

	BOOL _useEmbeddedPreview;
	NSURL* _url;
	NSString* _uti;

}

@property (readonly) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (readonly) NSString * uti;                               //@synthesize uti=_uti - In the implementation block
@property (assign,nonatomic) BOOL useEmbeddedPreview;              //@synthesize useEmbeddedPreview=_useEmbeddedPreview - In the implementation block
-(id)init;
-(id)description;
-(NSURL *)url;
-(long long)mediaType;
-(NSString *)uti;
-(BOOL)useEmbeddedPreview;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithURL:(id)arg1 UTI:(id)arg2 ;
-(void)setUseEmbeddedPreview:(BOOL)arg1 ;
@end
