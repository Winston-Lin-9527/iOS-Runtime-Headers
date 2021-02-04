/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSCrowdsourcedFeedbackWhitelist
@required
-(void)getLastWhitelistRetrievalURLStringWithCompletionHandler:(/*^block*/id)arg1;
-(void)replaceDomainWhitelistWithDomains:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getWhitelistStatusForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setDomain:(id)arg1 isWhitelistedForFeedback:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setLastWhitelistRetrievalURLString:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end
