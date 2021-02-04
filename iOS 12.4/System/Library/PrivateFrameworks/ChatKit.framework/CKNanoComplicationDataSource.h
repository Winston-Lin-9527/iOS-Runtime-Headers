/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IMChat, CKNanoComplicationSpecs;

@interface CKNanoComplicationDataSource : NSObject {

	BOOL _messageRecdNotification;
	NSString* _complicationApplicationIdentifier;
	IMChat* _lastReceivedChat;
	long long _family;
	long long _unreadMessageCount;
	CKNanoComplicationSpecs* _specs;

}

@property (nonatomic,retain) IMChat * lastReceivedChat;                                        //@synthesize lastReceivedChat=_lastReceivedChat - In the implementation block
@property (assign,nonatomic) long long family;                                                 //@synthesize family=_family - In the implementation block
@property (assign,nonatomic) long long unreadMessageCount;                                     //@synthesize unreadMessageCount=_unreadMessageCount - In the implementation block
@property (assign,nonatomic) BOOL messageRecdNotification;                                     //@synthesize messageRecdNotification=_messageRecdNotification - In the implementation block
@property (nonatomic,copy,readonly) NSString * complicationApplicationIdentifier;              //@synthesize complicationApplicationIdentifier=_complicationApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) CKNanoComplicationSpecs * specs;                                //@synthesize specs=_specs - In the implementation block
+(id)staticTemplateForFamily:(long long)arg1 device:(id)arg2 ;
+(id)staticTemplateForFamily:(long long)arg1 compact:(BOOL)arg2 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)_richTemplateForFamily:(long long)arg1 unreadCount:(unsigned long long)arg2 locked:(BOOL)arg3 ;
-(id)_templateForFamily:(long long)arg1 unreadMessageCount:(long long)arg2 locked:(BOOL)arg3 ;
-(id)_imageProviderWithForegroundName:(id)arg1 unreadCount:(long long)arg2 family:(long long)arg3 locked:(BOOL)arg4 ;
-(id)_fullColorImageProviderForUnreadCount:(unsigned long long)arg1 family:(long long)arg2 template:(id)arg3 ;
-(void)_setDefaultBackgroundForTemplate:(id)arg1 ;
-(CKNanoComplicationSpecs *)specs;
-(id)_textProviderForUnreadCount:(unsigned long long)arg1 locked:(BOOL)arg2 shortText:(BOOL)arg3 tintColor:(id)arg4 ;
-(id)drawUnreadCount:(unsigned long long)arg1 ontoImage:(id)arg2 family:(long long)arg3 template:(id)arg4 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 ;
-(NSString *)complicationApplicationIdentifier;
-(IMChat *)lastReceivedChat;
-(void)setLastReceivedChat:(IMChat *)arg1 ;
-(long long)family;
-(void)setFamily:(long long)arg1 ;
-(long long)unreadMessageCount;
-(void)setUnreadMessageCount:(long long)arg1 ;
-(BOOL)messageRecdNotification;
-(void)setMessageRecdNotification:(BOOL)arg1 ;
@end
