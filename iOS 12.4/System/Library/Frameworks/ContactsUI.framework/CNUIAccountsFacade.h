/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, CNUIAccountsFacadeRequestRunner;

@interface CNUIAccountsFacade : NSObject {

	ACAccountStore* _accountStore;
	CNUIAccountsFacadeRequestRunner* _requestRunner;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;                                //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) CNUIAccountsFacadeRequestRunner * requestRunner;              //@synthesize requestRunner=_requestRunner - In the implementation block
-(id)initWithAccountStore:(id)arg1 requestRunner:(id)arg2 ;
-(CNUIAccountsFacadeRequestRunner *)requestRunner;
-(void)fetchiCloudFamilyMembersWithCompletionHandler:(/*^block*/id)arg1 ;
-(ACAccountStore *)accountStore;
-(id)init;
@end
