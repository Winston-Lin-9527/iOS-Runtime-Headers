/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKit/UIActivityItemSource.h>
#import <libobjc.A.dylib/AVTAvatarRecordInternal.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSDate;

@interface AVTAvatarRecord : NSObject <UIActivityItemSource, AVTAvatarRecordInternal, NSSecureCoding, NSCopying> {

	NSString* _identifier;
	NSData* _avatarData;
	NSDate* _orderDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * avatarData;                            //@synthesize avatarData=_avatarData - In the implementation block
@property (nonatomic,readonly) NSDate * orderDate;                           //@synthesize orderDate=_orderDate - In the implementation block
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isPuppet,nonatomic,readonly) BOOL puppet; 
+(BOOL)canLoadAvatarWithData:(id)arg1 ;
+(id)defaultAvatarRecord;
+(id)dataForNeutralRecord;
+(id)dataForNewRecord;
+(/*^block*/id)matchingIdentifierTest:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSData *)avatarData;
-(NSDate *)orderDate;
-(id)initWithAvatarData:(id)arg1 orderDate:(id)arg2 ;
-(BOOL)isPuppet;
-(void)setAvatarData:(NSData *)arg1 ;
-(id)initWithAvatarData:(id)arg1 identifier:(id)arg2 orderDate:(id)arg3 ;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEditable;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
@end
