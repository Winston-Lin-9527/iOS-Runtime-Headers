/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _MRContentItemProtobuf, _MRPlaybackQueueRequestProtobuf;

@interface MRContentItemRequest : NSObject <NSSecureCoding> {

	_MRContentItemProtobuf* _item;
	_MRPlaybackQueueRequestProtobuf* _request;

}

@property (nonatomic,retain) _MRContentItemProtobuf * item;                          //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) _MRPlaybackQueueRequestProtobuf * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_MRContentItemProtobuf *)item;
-(void)setItem:(_MRContentItemProtobuf *)arg1 ;
-(void)setRequest:(_MRPlaybackQueueRequestProtobuf *)arg1 ;
-(_MRPlaybackQueueRequestProtobuf *)request;
-(id)initWithItem:(id)arg1 request:(id)arg2 ;
@end
