CellProfiler Pipeline: http://www.cellprofiler.org
Version:1
SVNRevision:9777

LoadImages:[module_num:1|svn_version:\'9777\'|variable_revision_number:5|show_window:False|notes:\x5B\x5D]
    File type to be loaded:individual images
    File selection method:Text-Exact match
    Number of images in each group?:3
    Type the text that the excluded images have in common:Do not use
    Analyze all subfolders within the selected folder?:No
    Input image file location:Default Input Folder\x7CNone
    Check image sets for missing or duplicate files?:Yes
    Group images by metadata?:No
    Exclude certain files?:No
    Specify metadata fields to group by:
    Text that these images have in common (case-sensitive):w2.TIF
    Name this loaded image:GFP
    Position of this image in each group:1
    Extract metadata from where?:None
    Regular expression that finds metadata in the file name:^(?P<Plate>.*)_(?P<Well>\x5BA-P\x5D\x5B0-9\x5D{2})_s(?P<Site>\x5B0-9\x5D)
    Type the regular expression that finds metadata in the subfolder path:.*\x5B\\\\/\x5D(?P<Date>.*)\x5B\\\\/\x5D(?P<Run>.*)$

MeasureImageIntensity:[module_num:2|svn_version:\'9604\'|variable_revision_number:2|show_window:False|notes:\x5B\x5D]
    Select the image to measure:GFP
    Measure the intensity only from areas enclosed by objects?:No
    Select the input objects:None
