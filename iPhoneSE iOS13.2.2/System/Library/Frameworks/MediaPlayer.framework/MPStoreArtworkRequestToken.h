/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class NSURL, NSArray, NSString;

@interface MPStoreArtworkRequestToken : NSObject <NSSecureCoding, MPArtworkDataSourceVisualIdenticality> {

	BOOL _shouldIgnoreImage;
	NSURL* _artworkURL;
	NSArray* _lookupItemArtworks;
	NSArray* _artworkInfoEntries;
	NSString* _cropStyle;
	NSString* _sourceEditorialArtworkKind;

}

@property (nonatomic,copy) NSURL * artworkURL;                                 //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,copy) NSArray * lookupItemArtworks;                       //@synthesize lookupItemArtworks=_lookupItemArtworks - In the implementation block
@property (nonatomic,copy) NSArray * artworkInfoEntries;                       //@synthesize artworkInfoEntries=_artworkInfoEntries - In the implementation block
@property (nonatomic,copy) NSString * cropStyle;                               //@synthesize cropStyle=_cropStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreImage;                           //@synthesize shouldIgnoreImage=_shouldIgnoreImage - In the implementation block
@property (nonatomic,copy) NSString * sourceEditorialArtworkKind;              //@synthesize sourceEditorialArtworkKind=_sourceEditorialArtworkKind - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringRepresentation;
-(NSURL *)artworkURL;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(NSArray *)lookupItemArtworks;
-(void)setLookupItemArtworks:(NSArray *)arg1 ;
-(NSArray *)artworkInfoEntries;
-(void)setArtworkInfoEntries:(NSArray *)arg1 ;
-(NSString *)cropStyle;
-(void)setCropStyle:(NSString *)arg1 ;
-(BOOL)shouldIgnoreImage;
-(void)setShouldIgnoreImage:(BOOL)arg1 ;
-(NSString *)sourceEditorialArtworkKind;
-(void)setSourceEditorialArtworkKind:(NSString *)arg1 ;
@end
