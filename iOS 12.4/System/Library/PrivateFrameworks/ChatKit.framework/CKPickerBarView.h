/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol CKPickerBarView <NSObject>
@property (nonatomic,copy) NSArray * acknowledgmentViews; 
@required
-(id)initWithGroupCounts:(id)arg1 selectedType:(long long)arg2 orientation:(char)arg3;
-(NSArray *)acknowledgmentViews;
-(void)performShowAnimation:(/*^block*/id)arg1;
-(void)performSendAnimation:(/*^block*/id)arg1;
-(void)performCancelAnimation:(/*^block*/id)arg1;
-(void)performSelectedAnimation:(/*^block*/id)arg1;
-(void)setAcknowledgmentViews:(id)arg1;

@end
