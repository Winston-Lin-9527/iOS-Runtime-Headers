/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKPassKitStateObserver : NSObject {

	BOOL _passKitUIPresented;
	BOOL _iTunesStoreDialogPresented;

}

@property (assign,nonatomic) BOOL passKitUIPresented;                      //@synthesize passKitUIPresented=_passKitUIPresented - In the implementation block
@property (assign,nonatomic) BOOL iTunesStoreDialogPresented;              //@synthesize iTunesStoreDialogPresented=_iTunesStoreDialogPresented - In the implementation block
+(id)sharedInstance;
-(BOOL)passKitUIPresented;
-(BOOL)iTunesStoreDialogPresented;
-(void)prepareForResume;
-(void)setITunesStoreDialogPresented:(BOOL)arg1 ;
-(void)setPassKitUIPresented:(BOOL)arg1 ;
-(void)_passKitUIDismissed;
-(void)_iTunesStoreDialogDidDismiss;
-(void)_iTunesStoreDialogWillDisplay;
-(void)_passKitUIPresented;
-(id)init;
-(void)dealloc;
-(id)description;
@end
