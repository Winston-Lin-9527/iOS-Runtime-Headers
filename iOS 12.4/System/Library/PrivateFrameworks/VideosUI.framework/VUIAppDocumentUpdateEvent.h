/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VUIAppDocumentUpdateEventDescriptor, NSDictionary;

@interface VUIAppDocumentUpdateEvent : NSObject <NSCopying> {

	VUIAppDocumentUpdateEventDescriptor* _descriptor;

}

@property (nonatomic,retain) VUIAppDocumentUpdateEventDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)restrictions;
+(id)preferredVideoFormat;
+(id)purchases;
+(id)entitlements;
+(id)settings;
+(id)playActivity;
+(id)favorites;
+(id)accountChanged;
+(id)removeFromPlayHistory;
+(id)utsk;
+(id)appDidBecomeActive;
+(id)playHistoryUpdated;
+(id)clearPlayHistory;
+(id)locationAuthorizationChanged;
-(id)initWithDescriptor:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDescriptor:(VUIAppDocumentUpdateEventDescriptor *)arg1 ;
-(VUIAppDocumentUpdateEventDescriptor *)descriptor;
-(NSDictionary *)dictionaryRepresentation;
-(id)coalescedEvent:(id)arg1 ;
@end
