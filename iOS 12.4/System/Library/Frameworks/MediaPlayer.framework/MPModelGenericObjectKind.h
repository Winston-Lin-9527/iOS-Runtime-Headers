/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelKind.h>

@class NSDictionary;

@interface MPModelGenericObjectKind : MPModelKind {

	NSDictionary* _relationshipKinds;

}

@property (nonatomic,readonly) NSDictionary * relationshipKinds;              //@synthesize relationshipKinds=_relationshipKinds - In the implementation block
+(id)kindWithRelationshipKinds:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)humanDescription;
-(NSDictionary *)relationshipKinds;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
