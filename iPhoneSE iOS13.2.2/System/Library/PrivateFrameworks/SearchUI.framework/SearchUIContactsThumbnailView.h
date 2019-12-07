/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <ContactsUI/CNAvatarView.h>

@class SFContactImage;

@interface SearchUIContactsThumbnailView : CNAvatarView {

	SFContactImage* _contactImage;

}

@property (nonatomic,retain) SFContactImage * contactImage;              //@synthesize contactImage=_contactImage - In the implementation block
-(id)init;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)setContactImage:(SFContactImage *)arg1 ;
-(SFContactImage *)contactImage;
@end
