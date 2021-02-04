/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMutableMessageHeaders, NSArray, MFOutgoingLibraryMessageContent, MFOutgoingRichtextMessageContent, MFOutgoingMultipartRelatedContent;

@interface MFOutgoingMessageContent : NSObject {

	MFMutableMessageHeaders* _headers;
	NSArray* _placeholders;

}

@property (nonatomic,retain) MFMutableMessageHeaders * headers;                                   //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSArray * placeholders;                                              //@synthesize placeholders=_placeholders - In the implementation block
@property (nonatomic,readonly) MFOutgoingLibraryMessageContent * libraryContent; 
@property (nonatomic,readonly) MFOutgoingRichtextMessageContent * richtextContent; 
@property (nonatomic,readonly) MFOutgoingMultipartRelatedContent * multipartContent; 
-(MFOutgoingRichtextMessageContent *)richtextContent;
-(MFOutgoingMultipartRelatedContent *)multipartContent;
-(MFOutgoingLibraryMessageContent *)libraryContent;
-(void)setPlaceholders:(NSArray *)arg1 ;
-(void)setHeaders:(MFMutableMessageHeaders *)arg1 ;
-(MFMutableMessageHeaders *)headers;
-(NSArray *)placeholders;
-(void)dealloc;
-(id)copy;
@end
