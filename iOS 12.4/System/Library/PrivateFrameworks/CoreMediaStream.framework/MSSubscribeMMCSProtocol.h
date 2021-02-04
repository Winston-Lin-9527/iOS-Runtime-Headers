/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/MSMMCSProtocol.h>
#import <libobjc.A.dylib/MSSubscribeStorageProtocol.h>

@protocol MSSubscribeStorageProtocolDelegate;
@class NSMutableDictionary, NSString;

@interface MSSubscribeMMCSProtocol : MSMMCSProtocol <MSSubscribeStorageProtocol> {

	id<MSSubscribeStorageProtocolDelegate> _delegate;
	unsigned long long _itemCount;
	NSMutableDictionary* _itemIDToAssetDict;
	unsigned long long* _itemIDs;
	const char** _signatures;
	char** _authTokens;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<MSSubscribeStorageProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithPersonID:(id)arg1 ;
-(void)retrieveAssets:(id)arg1 ;
-(void)_getItemDone:(unsigned long long)arg1 path:(id)arg2 error:(id)arg3 ;
-(void)_requestCompleted;
-(void)_tellDelegateProtocolDidFinishRetrievingAssetParams:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MSSubscribeStorageProtocolDelegate>)arg1 ;
-(id<MSSubscribeStorageProtocolDelegate>)delegate;
-(void)deactivate;
@end
