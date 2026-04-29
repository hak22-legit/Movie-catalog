#pragma once
#include <string>
#include <vector>

enum class MediaType   { Movie, Book };
enum class WatchStatus { Done, Pending };

// ✅ find your Entry struct and add posterUrl
struct Entry {
    int         id         = 0;
    std::string title;
    std::string genre;
    std::string director;
    std::string plot;
    std::string imdbRating;
    std::string posterUrl  = "";   // ✅ add this line
    int         year       = 0;
    float       rating     = 0.0f;
    std::string notes;
    MediaType   type       = MediaType::Movie;
    WatchStatus status     = WatchStatus::Pending;
};

struct Catalog {
    std::string        username;
    std::vector<Entry> entries;
    int                nextId = 1;
};

struct User {
    std::string username;
    std::string password;
};
